#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCutting_conditionType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCutting_conditionType



namespace cutting_tool_schema_arm
{

class CCutting_conditionType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCutting_conditionType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCutting_conditionType(CCutting_conditionType const& init);
	void operator=(CCutting_conditionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCutting_conditionType); }
	MemberElement<CCutting_condition, _altova_mi_altova_CCutting_conditionType_altova_Cutting_condition> Cutting_condition;
	struct Cutting_condition { typedef Iterator<CCutting_condition> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCutting_conditionType
