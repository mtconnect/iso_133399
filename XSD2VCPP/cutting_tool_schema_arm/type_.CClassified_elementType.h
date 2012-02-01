#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassified_elementType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassified_elementType



namespace cutting_tool_schema_arm
{

class CClassified_elementType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CClassified_elementType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CClassified_elementType(CClassified_elementType const& init);
	void operator=(CClassified_elementType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CClassified_elementType); }
	MemberElement<CItem_version, _altova_mi_altova_CClassified_elementType_altova_Item_version> Item_version;
	struct Item_version { typedef Iterator<CItem_version> iterator; };
	MemberElement<CItem, _altova_mi_altova_CClassified_elementType_altova_Item> Item;
	struct Item { typedef Iterator<CItem> iterator; };
	MemberElement<CItem_definition, _altova_mi_altova_CClassified_elementType_altova_Item_definition> Item_definition;
	struct Item_definition { typedef Iterator<CItem_definition> iterator; };
	MemberElement<CDocument, _altova_mi_altova_CClassified_elementType_altova_Document> Document;
	struct Document { typedef Iterator<CDocument> iterator; };
	MemberElement<CProperty, _altova_mi_altova_CClassified_elementType_altova_Property> Property;
	struct Property { typedef Iterator<CProperty> iterator; };
	MemberElement<CProperty_value_association, _altova_mi_altova_CClassified_elementType_altova_Property_value_association> Property_value_association;
	struct Property_value_association { typedef Iterator<CProperty_value_association> iterator; };
	MemberElement<CItem_instance, _altova_mi_altova_CClassified_elementType_altova_Item_instance> Item_instance;
	struct Item_instance { typedef Iterator<CItem_instance> iterator; };
	MemberElement<CDocument_file, _altova_mi_altova_CClassified_elementType_altova_Document_file> Document_file;
	struct Document_file { typedef Iterator<CDocument_file> iterator; };
	MemberElement<CDocument_version, _altova_mi_altova_CClassified_elementType_altova_Document_version> Document_version;
	struct Document_version { typedef Iterator<CDocument_version> iterator; };
	MemberElement<CDocument_representation, _altova_mi_altova_CClassified_elementType_altova_Document_representation> Document_representation;
	struct Document_representation { typedef Iterator<CDocument_representation> iterator; };
	MemberElement<CMaterial_designation, _altova_mi_altova_CClassified_elementType_altova_Material_designation> Material_designation;
	struct Material_designation { typedef Iterator<CMaterial_designation> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CClassified_elementType
