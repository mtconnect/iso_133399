#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPeriodType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPeriodType



namespace cutting_tool_schema_arm
{

class CPeriodType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CPeriodType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPeriodType(CPeriodType const& init);
	void operator=(CPeriodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPeriodType); }
	MemberElement<CDuration, _altova_mi_altova_CPeriodType_altova_Duration> Duration;
	struct Duration { typedef Iterator<CDuration> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPeriodType
