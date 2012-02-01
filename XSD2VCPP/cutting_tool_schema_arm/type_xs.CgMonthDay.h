#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CgMonthDay
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CgMonthDay



namespace cutting_tool_schema_arm
{

namespace xs
{	

class CgMonthDay : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CgMonthDay(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CgMonthDay(CgMonthDay const& init);
	void operator=(CgMonthDay const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CgMonthDay); }
	void operator= (const altova::DateTime& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::GMonthDayFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator altova::DateTime()
	{
		return CastAs<altova::DateTime >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CgMonthDay
