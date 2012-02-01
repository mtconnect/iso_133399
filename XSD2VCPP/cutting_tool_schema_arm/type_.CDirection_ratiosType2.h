#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDirection_ratiosType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDirection_ratiosType2



namespace cutting_tool_schema_arm
{

class CDirection_ratiosType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDirection_ratiosType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDirection_ratiosType2(CDirection_ratiosType2 const& init);
	void operator=(CDirection_ratiosType2 const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_altova_CDirection_ratiosType2); }
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


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDirection_ratiosType2
