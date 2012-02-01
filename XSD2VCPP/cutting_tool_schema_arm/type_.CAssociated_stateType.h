#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_stateType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_stateType



namespace cutting_tool_schema_arm
{

class CAssociated_stateType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssociated_stateType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssociated_stateType(CAssociated_stateType const& init);
	void operator=(CAssociated_stateType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssociated_stateType); }
	MemberElement<CState, _altova_mi_altova_CAssociated_stateType_altova_State> State;
	struct State { typedef Iterator<CState> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_stateType
