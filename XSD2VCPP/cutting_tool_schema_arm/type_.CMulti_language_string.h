#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMulti_language_string
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMulti_language_string



namespace cutting_tool_schema_arm
{

class CMulti_language_string : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CMulti_language_string(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CMulti_language_string(CMulti_language_string const& init);
	void operator=(CMulti_language_string const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CMulti_language_string); }

	MemberAttribute<string_type,_altova_mi_altova_CMulti_language_string_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CMulti_language_string_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAdditional_language_stringType, _altova_mi_altova_CMulti_language_string_altova_Additional_language_string> Additional_language_string;
	struct Additional_language_string { typedef Iterator<CAdditional_language_stringType> iterator; };
	MemberElement<CPrimary_language_stringType, _altova_mi_altova_CMulti_language_string_altova_Primary_language_string> Primary_language_string;
	struct Primary_language_string { typedef Iterator<CPrimary_language_stringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMulti_language_string
