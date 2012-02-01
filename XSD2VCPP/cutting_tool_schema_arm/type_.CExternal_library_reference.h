#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_library_reference
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_library_reference



namespace cutting_tool_schema_arm
{

class CExternal_library_reference : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CExternal_library_reference(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CExternal_library_reference(CExternal_library_reference const& init);
	void operator=(CExternal_library_reference const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CExternal_library_reference); }

	MemberAttribute<string_type,_altova_mi_altova_CExternal_library_reference_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CExternal_library_reference_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CDescriptionType6, _altova_mi_altova_CExternal_library_reference_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType6> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CExternal_library_reference_altova_External_id> External_id;
	struct External_id { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CExternal_library_reference_altova_Library_type> Library_type;
	struct Library_type { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_library_reference
