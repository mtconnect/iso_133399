#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CbooleanType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CbooleanType



namespace cutting_tool_schema_arm
{

namespace xs
{	

class CbooleanType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CbooleanType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CbooleanType(CbooleanType const& init);
	void operator=(CbooleanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CbooleanType); }
	cutting_tool_schema_arm_EXPORT void operator=(const bool& value);
	cutting_tool_schema_arm_EXPORT operator bool();
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CbooleanType
