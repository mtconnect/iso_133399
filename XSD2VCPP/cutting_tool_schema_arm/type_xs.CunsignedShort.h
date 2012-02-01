#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CunsignedShort
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CunsignedShort



namespace cutting_tool_schema_arm
{

namespace xs
{	

class CunsignedShort : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CunsignedShort(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CunsignedShort(CunsignedShort const& init);
	void operator=(CunsignedShort const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CunsignedShort); }
	void operator= (const unsigned& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::IntegerFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator unsigned()
	{
		return CastAs<unsigned >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CunsignedShort
