#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType9
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType9



namespace cutting_tool_schema_arm
{

class CRelatedType9 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatedType9(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatedType9(CRelatedType9 const& init);
	void operator=(CRelatedType9 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatedType9); }
	MemberElement<CMating_association, _altova_mi_altova_CRelatedType9_altova_Mating_association> Mating_association;
	struct Mating_association { typedef Iterator<CMating_association> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType9
