#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDefault_language_stringType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDefault_language_stringType



namespace cutting_tool_schema_arm
{

class CDefault_language_stringType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDefault_language_stringType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDefault_language_stringType(CDefault_language_stringType const& init);
	void operator=(CDefault_language_stringType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDefault_language_stringType); }
	cutting_tool_schema_arm_EXPORT void operator=(const string_type& value);
	cutting_tool_schema_arm_EXPORT operator string_type();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDefault_language_stringType
