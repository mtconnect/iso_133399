#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CState
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CState



namespace cutting_tool_schema_arm
{

class CState : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CState(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CState(CState const& init);
	void operator=(CState const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CState); }

	MemberAttribute<string_type,_altova_mi_altova_CState_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CState_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CState_altova_Name> Name;
	struct Name { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CState
