#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CnonPositiveInteger
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CnonPositiveInteger



namespace cutting_tool_schema_arm
{

namespace xs
{	

class CnonPositiveInteger : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CnonPositiveInteger(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CnonPositiveInteger(CnonPositiveInteger const& init);
	void operator=(CnonPositiveInteger const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CnonPositiveInteger); }
	void operator= (const __int64& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator __int64()
	{
		return CastAs<__int64 >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CnonPositiveInteger
