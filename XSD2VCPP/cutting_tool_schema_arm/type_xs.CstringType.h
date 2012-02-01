#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CstringType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CstringType



namespace cutting_tool_schema_arm
{

namespace xs
{	

class CstringType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CstringType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CstringType(CstringType const& init);
	void operator=(CstringType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CstringType); }
	cutting_tool_schema_arm_EXPORT void operator=(const string_type& value);
	cutting_tool_schema_arm_EXPORT operator string_type();
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CstringType
