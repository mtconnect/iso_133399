#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_applied_toType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_applied_toType2



namespace cutting_tool_schema_arm
{

class CIs_applied_toType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CIs_applied_toType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CIs_applied_toType2(CIs_applied_toType2 const& init);
	void operator=(CIs_applied_toType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CIs_applied_toType2); }
	MemberElement<CClassification_association, _altova_mi_altova_CIs_applied_toType2_altova_Classification_association> Classification_association;
	struct Classification_association { typedef Iterator<CClassification_association> iterator; };
	MemberElement<CClassification_system, _altova_mi_altova_CIs_applied_toType2_altova_Classification_system> Classification_system;
	struct Classification_system { typedef Iterator<CClassification_system> iterator; };
	MemberElement<CItem_definition, _altova_mi_altova_CIs_applied_toType2_altova_Item_definition> Item_definition;
	struct Item_definition { typedef Iterator<CItem_definition> iterator; };
	MemberElement<CDocument, _altova_mi_altova_CIs_applied_toType2_altova_Document> Document;
	struct Document { typedef Iterator<CDocument> iterator; };
	MemberElement<CDocument_file, _altova_mi_altova_CIs_applied_toType2_altova_Document_file> Document_file;
	struct Document_file { typedef Iterator<CDocument_file> iterator; };
	MemberElement<CDocument_representation, _altova_mi_altova_CIs_applied_toType2_altova_Document_representation> Document_representation;
	struct Document_representation { typedef Iterator<CDocument_representation> iterator; };
	MemberElement<CDocument_version, _altova_mi_altova_CIs_applied_toType2_altova_Document_version> Document_version;
	struct Document_version { typedef Iterator<CDocument_version> iterator; };
	MemberElement<CGeneral_classification, _altova_mi_altova_CIs_applied_toType2_altova_General_classification> General_classification;
	struct General_classification { typedef Iterator<CGeneral_classification> iterator; };
	MemberElement<CItem, _altova_mi_altova_CIs_applied_toType2_altova_Item> Item;
	struct Item { typedef Iterator<CItem> iterator; };
	MemberElement<CItem_structure_association, _altova_mi_altova_CIs_applied_toType2_altova_Item_structure_association> Item_structure_association;
	struct Item_structure_association { typedef Iterator<CItem_structure_association> iterator; };
	MemberElement<CItem_instance, _altova_mi_altova_CIs_applied_toType2_altova_Item_instance> Item_instance;
	struct Item_instance { typedef Iterator<CItem_instance> iterator; };
	MemberElement<CItem_version, _altova_mi_altova_CIs_applied_toType2_altova_Item_version> Item_version;
	struct Item_version { typedef Iterator<CItem_version> iterator; };
	MemberElement<CItem_version_relationship, _altova_mi_altova_CIs_applied_toType2_altova_Item_version_relationship> Item_version_relationship;
	struct Item_version_relationship { typedef Iterator<CItem_version_relationship> iterator; };
	MemberElement<CPerson_in_organization, _altova_mi_altova_CIs_applied_toType2_altova_Person_in_organization> Person_in_organization;
	struct Person_in_organization { typedef Iterator<CPerson_in_organization> iterator; };
	MemberElement<CProperty, _altova_mi_altova_CIs_applied_toType2_altova_Property> Property;
	struct Property { typedef Iterator<CProperty> iterator; };
	MemberElement<CProperty_value_association, _altova_mi_altova_CIs_applied_toType2_altova_Property_value_association> Property_value_association;
	struct Property_value_association { typedef Iterator<CProperty_value_association> iterator; };
	MemberElement<CMaterial_designation, _altova_mi_altova_CIs_applied_toType2_altova_Material_designation> Material_designation;
	struct Material_designation { typedef Iterator<CMaterial_designation> iterator; };
	MemberElement<CPhysical_item_structure_association, _altova_mi_altova_CIs_applied_toType2_altova_Physical_item_structure_association> Physical_item_structure_association;
	struct Physical_item_structure_association { typedef Iterator<CPhysical_item_structure_association> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_applied_toType2
