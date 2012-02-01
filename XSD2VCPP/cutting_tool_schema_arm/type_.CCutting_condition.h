#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCutting_condition
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCutting_condition



namespace cutting_tool_schema_arm
{

class CCutting_condition : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCutting_condition(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCutting_condition(CCutting_condition const& init);
	void operator=(CCutting_condition const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCutting_condition); }

	MemberAttribute<string_type,_altova_mi_altova_CCutting_condition_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CCutting_condition_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CCutting_condition_altova_Condition_name> Condition_name;
	struct Condition_name { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCutting_condition
