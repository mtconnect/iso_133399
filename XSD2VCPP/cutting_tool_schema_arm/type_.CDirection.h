#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDirection
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDirection



namespace cutting_tool_schema_arm
{

class CDirection : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDirection(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDirection(CDirection const& init);
	void operator=(CDirection const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDirection); }

	MemberAttribute<string_type,_altova_mi_altova_CDirection_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDirection_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CDirection_ratiosType, _altova_mi_altova_CDirection_altova_Direction_ratios> Direction_ratios;
	struct Direction_ratios { typedef Iterator<CDirection_ratiosType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDirection
