#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CanySimpleType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CanySimpleType



namespace cutting_tool_schema_arm
{

namespace xs
{	

class CanySimpleType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CanySimpleType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CanySimpleType(CanySimpleType const& init);
	void operator=(CanySimpleType const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_xs_altova_CanySimpleType); }
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace xs

}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA_xs_ALTOVA_CanySimpleType
