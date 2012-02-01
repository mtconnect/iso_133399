#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CEffectivity
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CEffectivity



namespace cutting_tool_schema_arm
{

class CEffectivity : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CEffectivity(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CEffectivity(CEffectivity const& init);
	void operator=(CEffectivity const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CEffectivity); }

	MemberAttribute<string_type,_altova_mi_altova_CEffectivity_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CEffectivity_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CConcerned_organizationType, _altova_mi_altova_CEffectivity_altova_Concerned_organization> Concerned_organization;
	struct Concerned_organization { typedef Iterator<CConcerned_organizationType> iterator; };
	MemberElement<CDescriptionType10, _altova_mi_altova_CEffectivity_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType10> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CEffectivity_altova_Effectivity_context> Effectivity_context;
	struct Effectivity_context { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CEnd_definitionType, _altova_mi_altova_CEffectivity_altova_End_definition> End_definition;
	struct End_definition { typedef Iterator<CEnd_definitionType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CEffectivity_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CPeriodType, _altova_mi_altova_CEffectivity_altova_Period> Period;
	struct Period { typedef Iterator<CPeriodType> iterator; };
	MemberElement<CStart_definitionType, _altova_mi_altova_CEffectivity_altova_Start_definition> Start_definition;
	struct Start_definition { typedef Iterator<CStart_definitionType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CEffectivity_altova_Version_id> Version_id;
	struct Version_id { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CEffectivity
