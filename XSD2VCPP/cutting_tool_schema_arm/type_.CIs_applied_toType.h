#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_applied_toType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_applied_toType



namespace cutting_tool_schema_arm
{

class CIs_applied_toType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CIs_applied_toType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CIs_applied_toType(CIs_applied_toType const& init);
	void operator=(CIs_applied_toType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CIs_applied_toType); }
	MemberElement<CItem, _altova_mi_altova_CIs_applied_toType_altova_Item> Item;
	struct Item { typedef Iterator<CItem> iterator; };
	MemberElement<CItem_version, _altova_mi_altova_CIs_applied_toType_altova_Item_version> Item_version;
	struct Item_version { typedef Iterator<CItem_version> iterator; };
	MemberElement<CItem_definition, _altova_mi_altova_CIs_applied_toType_altova_Item_definition> Item_definition;
	struct Item_definition { typedef Iterator<CItem_definition> iterator; };
	MemberElement<CProperty, _altova_mi_altova_CIs_applied_toType_altova_Property> Property;
	struct Property { typedef Iterator<CProperty> iterator; };
	MemberElement<CGrade, _altova_mi_altova_CIs_applied_toType_altova_Grade> Grade;
	struct Grade { typedef Iterator<CGrade> iterator; };
	MemberElement<CClassification_attribute, _altova_mi_altova_CIs_applied_toType_altova_Classification_attribute> Classification_attribute;
	struct Classification_attribute { typedef Iterator<CClassification_attribute> iterator; };
	MemberElement<CClassification_system, _altova_mi_altova_CIs_applied_toType_altova_Classification_system> Classification_system;
	struct Classification_system { typedef Iterator<CClassification_system> iterator; };
	MemberElement<CDocument, _altova_mi_altova_CIs_applied_toType_altova_Document> Document;
	struct Document { typedef Iterator<CDocument> iterator; };
	MemberElement<CDocument_representation, _altova_mi_altova_CIs_applied_toType_altova_Document_representation> Document_representation;
	struct Document_representation { typedef Iterator<CDocument_representation> iterator; };
	MemberElement<CDocument_version, _altova_mi_altova_CIs_applied_toType_altova_Document_version> Document_version;
	struct Document_version { typedef Iterator<CDocument_version> iterator; };
	MemberElement<CGeneral_classification, _altova_mi_altova_CIs_applied_toType_altova_General_classification> General_classification;
	struct General_classification { typedef Iterator<CGeneral_classification> iterator; };
	MemberElement<CItem_instance, _altova_mi_altova_CIs_applied_toType_altova_Item_instance> Item_instance;
	struct Item_instance { typedef Iterator<CItem_instance> iterator; };
	MemberElement<COrganization, _altova_mi_altova_CIs_applied_toType_altova_Organization> Organization;
	struct Organization { typedef Iterator<COrganization> iterator; };
	MemberElement<CDocument_type_property, _altova_mi_altova_CIs_applied_toType_altova_Document_type_property> Document_type_property;
	struct Document_type_property { typedef Iterator<CDocument_type_property> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CIs_applied_toType
