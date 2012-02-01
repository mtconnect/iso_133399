#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_type_property
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_type_property



namespace cutting_tool_schema_arm
{

class CDocument_type_property : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDocument_type_property(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDocument_type_property(CDocument_type_property const& init);
	void operator=(CDocument_type_property const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDocument_type_property); }

	MemberAttribute<string_type,_altova_mi_altova_CDocument_type_property_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDocument_type_property_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_type_property_altova_Document_type_name> Document_type_name;
	struct Document_type_name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CUsed_classification_systemType, _altova_mi_altova_CDocument_type_property_altova_Used_classification_system> Used_classification_system;
	struct Used_classification_system { typedef Iterator<CUsed_classification_systemType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_type_property
