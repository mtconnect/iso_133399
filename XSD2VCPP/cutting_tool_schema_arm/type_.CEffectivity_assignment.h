#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CEffectivity_assignment
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CEffectivity_assignment



namespace cutting_tool_schema_arm
{

class CEffectivity_assignment : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CEffectivity_assignment(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CEffectivity_assignment(CEffectivity_assignment const& init);
	void operator=(CEffectivity_assignment const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CEffectivity_assignment); }

	MemberAttribute<string_type,_altova_mi_altova_CEffectivity_assignment_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CEffectivity_assignment_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssigned_effectivityType, _altova_mi_altova_CEffectivity_assignment_altova_Assigned_effectivity> Assigned_effectivity;
	struct Assigned_effectivity { typedef Iterator<CAssigned_effectivityType> iterator; };
	MemberElement<CEffective_elementType, _altova_mi_altova_CEffectivity_assignment_altova_Effective_element> Effective_element;
	struct Effective_element { typedef Iterator<CEffective_elementType> iterator; };
	MemberElement<xs::CbooleanType, _altova_mi_altova_CEffectivity_assignment_altova_Effectivity_indication> Effectivity_indication;
	struct Effectivity_indication { typedef Iterator<xs::CbooleanType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CEffectivity_assignment_altova_Role> Role;
	struct Role { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CEffectivity_assignment
