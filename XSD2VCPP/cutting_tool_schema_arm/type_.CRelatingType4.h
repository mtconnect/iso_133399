#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType4
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType4



namespace cutting_tool_schema_arm
{

class CRelatingType4 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatingType4(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatingType4(CRelatingType4 const& init);
	void operator=(CRelatingType4 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatingType4); }
	MemberElement<CEffectivity, _altova_mi_altova_CRelatingType4_altova_Effectivity> Effectivity;
	struct Effectivity { typedef Iterator<CEffectivity> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType4
