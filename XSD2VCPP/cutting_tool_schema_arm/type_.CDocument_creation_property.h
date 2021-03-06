#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_creation_property
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_creation_property



namespace cutting_tool_schema_arm
{

class CDocument_creation_property : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDocument_creation_property(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDocument_creation_property(CDocument_creation_property const& init);
	void operator=(CDocument_creation_property const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDocument_creation_property); }

	MemberAttribute<string_type,_altova_mi_altova_CDocument_creation_property_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDocument_creation_property_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_creation_property_altova_Creating_interface> Creating_interface;
	struct Creating_interface { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_creation_property_altova_Creating_system> Creating_system;
	struct Creating_system { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_creation_property_altova_Operating_system> Operating_system;
	struct Operating_system { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_creation_property
