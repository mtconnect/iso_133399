#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CunsignedByte
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CunsignedByte



namespace cutting_tool_schema_arm
{

namespace xs
{	

class CunsignedByte : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CunsignedByte(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CunsignedByte(CunsignedByte const& init);
	void operator=(CunsignedByte const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CunsignedByte); }
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

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CunsignedByte
