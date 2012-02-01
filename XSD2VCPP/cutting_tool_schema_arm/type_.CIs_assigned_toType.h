#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_assigned_toType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_assigned_toType



namespace cutting_tool_schema_arm
{

class CIs_assigned_toType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CIs_assigned_toType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CIs_assigned_toType(CIs_assigned_toType const& init);
	void operator=(CIs_assigned_toType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CIs_assigned_toType); }
	MemberElement<CItem, _altova_mi_altova_CIs_assigned_toType_altova_Item> Item;
	struct Item { typedef Iterator<CItem> iterator; };
	MemberElement<CItem_version, _altova_mi_altova_CIs_assigned_toType_altova_Item_version> Item_version;
	struct Item_version { typedef Iterator<CItem_version> iterator; };
	MemberElement<CClassification_attribute, _altova_mi_altova_CIs_assigned_toType_altova_Classification_attribute> Classification_attribute;
	struct Classification_attribute { typedef Iterator<CClassification_attribute> iterator; };
	MemberElement<CClassification_system, _altova_mi_altova_CIs_assigned_toType_altova_Classification_system> Classification_system;
	struct Classification_system { typedef Iterator<CClassification_system> iterator; };
	MemberElement<CItem_definition, _altova_mi_altova_CIs_assigned_toType_altova_Item_definition> Item_definition;
	struct Item_definition { typedef Iterator<CItem_definition> iterator; };
	MemberElement<CGeneral_classification, _altova_mi_altova_CIs_assigned_toType_altova_General_classification> General_classification;
	struct General_classification { typedef Iterator<CGeneral_classification> iterator; };
	MemberElement<CItem_structure_association, _altova_mi_altova_CIs_assigned_toType_altova_Item_structure_association> Item_structure_association;
	struct Item_structure_association { typedef Iterator<CItem_structure_association> iterator; };
	MemberElement<CItem_instance, _altova_mi_altova_CIs_assigned_toType_altova_Item_instance> Item_instance;
	struct Item_instance { typedef Iterator<CItem_instance> iterator; };
	MemberElement<COrganization, _altova_mi_altova_CIs_assigned_toType_altova_Organization> Organization;
	struct Organization { typedef Iterator<COrganization> iterator; };
	MemberElement<CPerson, _altova_mi_altova_CIs_assigned_toType_altova_Person> Person;
	struct Person { typedef Iterator<CPerson> iterator; };
	MemberElement<CProperty, _altova_mi_altova_CIs_assigned_toType_altova_Property> Property;
	struct Property { typedef Iterator<CProperty> iterator; };
	MemberElement<CSpecific_item_classification, _altova_mi_altova_CIs_assigned_toType_altova_Specific_item_classification> Specific_item_classification;
	struct Specific_item_classification { typedef Iterator<CSpecific_item_classification> iterator; };
	MemberElement<CMaterial_designation, _altova_mi_altova_CIs_assigned_toType_altova_Material_designation> Material_designation;
	struct Material_designation { typedef Iterator<CMaterial_designation> iterator; };
	MemberElement<CMated_item_relationship, _altova_mi_altova_CIs_assigned_toType_altova_Mated_item_relationship> Mated_item_relationship;
	struct Mated_item_relationship { typedef Iterator<CMated_item_relationship> iterator; };
	MemberElement<CPhysical_item_structure_association, _altova_mi_altova_CIs_assigned_toType_altova_Physical_item_structure_association> Physical_item_structure_association;
	struct Physical_item_structure_association { typedef Iterator<CPhysical_item_structure_association> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_assigned_toType
