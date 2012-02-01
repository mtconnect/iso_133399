#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssigned_effectivityType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssigned_effectivityType



namespace cutting_tool_schema_arm
{

class CAssigned_effectivityType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssigned_effectivityType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssigned_effectivityType(CAssigned_effectivityType const& init);
	void operator=(CAssigned_effectivityType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssigned_effectivityType); }
	MemberElement<CEffectivity, _altova_mi_altova_CAssigned_effectivityType_altova_Effectivity> Effectivity;
	struct Effectivity { typedef Iterator<CEffectivity> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssigned_effectivityType
