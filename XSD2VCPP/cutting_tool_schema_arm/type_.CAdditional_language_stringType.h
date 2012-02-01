#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAdditional_language_stringType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAdditional_language_stringType



namespace cutting_tool_schema_arm
{

class CAdditional_language_stringType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAdditional_language_stringType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAdditional_language_stringType(CAdditional_language_stringType const& init);
	void operator=(CAdditional_language_stringType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAdditional_language_stringType); }
	MemberElement<CString_with_language, _altova_mi_altova_CAdditional_language_stringType_altova_String_with_language> String_with_language;
	struct String_with_language { typedef Iterator<CString_with_language> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAdditional_language_stringType
