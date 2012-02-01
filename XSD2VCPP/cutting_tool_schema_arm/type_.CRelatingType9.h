#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType9
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType9



namespace cutting_tool_schema_arm
{

class CRelatingType9 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatingType9(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatingType9(CRelatingType9 const& init);
	void operator=(CRelatingType9 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatingType9); }
	MemberElement<CMating_association, _altova_mi_altova_CRelatingType9_altova_Mating_association> Mating_association;
	struct Mating_association { typedef Iterator<CMating_association> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType9
