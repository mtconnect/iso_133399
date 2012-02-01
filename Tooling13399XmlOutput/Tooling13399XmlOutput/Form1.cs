using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Reflection;
/* Output
<?xml version="1.0" encoding="Windows-1252"?>
<uos xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xmlns:xsd="http://www.w3.org/2001/XMLSchema">
  <coating id="id-4">
    <coating_name>TiAlN</coating_name>
    <coating_process>Coating_process</coating_process>
  </coating>
  <grade id="id-3">
    <coating>
      <coating ref="id-4" />
    </coating>
    <substrate>
      <substrate ref="id-5" />
    </substrate>
    <workpiece_material>
      <material_designation ref="id-6" />
    </workpiece_material>
  </grade>
  <item_characteristic_association id="id-2">
    <associated_characteristic>
      <grade ref="id-3" />
    </associated_characteristic>
    <associated_item>
      <item_definition xsi:nil="true" />
    </associated_item>
    <relation_type>used_for</relation_type>
  </item_characteristic_association>
  <material_designation id="id-6">
    <material_name>P</material_name>
  </material_designation>
  <organization id="id-0">
    <delivery_address>Someotherstreet 2, Sometown, Sweden</delivery_address>
    <Id>SE556677889901</Id>
    <organization_name>CTC -Cutting Tool Company</organization_name>
    <postal_address>Box 0000, Sometown, Sweden</postal_address>
    <visitor_address>Somestreet 1,Sometown, Sweden</visitor_address>
  </organization>
  <state id="id-1">
    <name>Blunt</name>
  </state>
  <substrate id="id-5">
    <name>WC</name>
  </substrate>
</uos>
*/

namespace Tooling13399XmlOutput
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        public static int n = 0;
        public string GenerateId()
        {
            return "id-" + Convert.ToString(n++);
        }

        public static string GetExeDirectory()
        {
            string exepath = Assembly.GetExecutingAssembly().Location;
            int n = exepath.LastIndexOfAny(new char[] { '\\' });
            exepath = exepath.Substring(0, n + 1);

            return exepath;
        }
        private void button2_Click(object sender, EventArgs e)
        {
            uos uos1 = new uos();
            string _xmlfilename = GetExeDirectory() + "ISO13399.xml";
            System.Xml.Serialization.XmlSerializer xSerializer = new System.Xml.Serialization.XmlSerializer(uos1.GetType());
            System.IO.StreamReader str1 = new System.IO.StreamReader(_xmlfilename);
            uos1 = (uos) xSerializer.Deserialize(str1);
            str1.Close();
 
        }
        private void button1_Click(object sender, EventArgs e)
        {
            List<object> items = new List<object>();
            uos uos1 = new uos();
            AddOrganization(ref uos1);
            AddState(ref uos1);
            AddItem_characteristic_association(ref uos1);
         
            System.Xml.Serialization.XmlSerializer x = new System.Xml.Serialization.XmlSerializer(uos1.GetType());
            x.Serialize(Console.Out, uos1);
        }
        T[] AddElement<T>(T[] items, T newobj)
        {
            List<T> list;
            if (items == null)
                list = new List<T>();
            else
                list = items.ToList<T>();
            list.Add((T)newobj);
            return list.ToArray<T>();
        }

        string AddOrganization(ref uos uos)
        {
            Organization org = new Organization();
            org.Delivery_address = "Someotherstreet 2, Sometown, Sweden";
            org.Id = "SE556677889901";
            org.id = GenerateId();
            org.Organization_name = "CTC -Cutting Tool Company";
            org.Postal_address = "Box 0000, Sometown, Sweden";
            org.Visitor_address = "Somestreet 1,Sometown, Sweden";
            uos.Organization = AddElement(uos.Organization, org);
            return org.id;

        }
        string AddState(ref uos uos)
        {
            State nstate = new State();
            nstate.id = GenerateId();
            nstate.Name = "Blunt";
            uos.State = AddElement(uos.State, nstate);
            return nstate.id;
        }
        string AddItem_characteristic_association(ref uos uos)
        {
            Item_characteristic_association item = new Item_characteristic_association();
            item.id = GenerateId();
            item.Associated_characteristic = new Item_characteristic_associationAssociated_characteristic();
            item.Associated_characteristic.Item = new Grade();
            Grade grade = (Grade)item.Associated_characteristic.Item;
            grade.@ref = AddGrade(ref uos);
            
            
            item.Associated_item = new Item_definition[1];
            item.Relation_type = "used_for";
            uos.Item_characteristic_association =  AddElement(uos.Item_characteristic_association, item);
            return item.id;
        }

        string AddString_value(ref List<object> items)
        {
            String_value s = new String_value();
            s.id = GenerateId();
            s.Value_name = "/IGNORE";
            s.Value_specification = new String_valueValue_specification();
            s.Value_specification.Item = "/IGNORE";
            return s.id;
            // <multi_language_string xsi:nil="true" ref="id-11"/>
        }
        string AddGrade(ref uos uos)
        {
            Grade g = new Grade();
            g.id = GenerateId();

            Coating c = new Coating();
            c.id=  GenerateId();
            c.Coating_name = "TiAlN";
            c.Coating_process = "Coating_process";
            uos.Coating = AddElement(uos.Coating, c);
 

            Substrate s = new Substrate();
            s.id = GenerateId();
            s.Name = "WC";
            uos.Substrate = AddElement(uos.Substrate, s);

            Material_designation m = new Material_designation();
            m.id = GenerateId();
            m.Material_name = "P";
            uos.Material_designation = AddElement(uos.Material_designation, m);

            g.Coating = new Coating[1];
            g.Coating[0] = new Coating();
            g.Coating[0].@ref = c.id;

            g.Substrate = new Substrate[1];
            g.Substrate[0] = new Substrate();
            g.Substrate[0].@ref = s.id;

            g.Workpiece_material = new Material_designation[1];
            g.Workpiece_material[0] =  new Material_designation();
            g.Workpiece_material[0].@ref = m.id;

            uos.Grade = AddElement(uos.Grade, g);
            return g.id;
       }

    }
}
