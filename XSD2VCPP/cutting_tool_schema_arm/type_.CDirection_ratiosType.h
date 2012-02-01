#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDirection_ratiosType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDirection_ratiosType



namespace cutting_tool_schema_arm
{

class CDirection_ratiosType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDirection_ratiosType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDirection_ratiosType(CDirection_ratiosType const& init);
	void operator=(CDirection_ratiosType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDirection_ratiosType); }
	cutting_tool_schema_arm_EXPORT void operator=(const string_type& value);
	cutting_tool_schema_arm_EXPORT operator string_type();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDirection_ratiosType
