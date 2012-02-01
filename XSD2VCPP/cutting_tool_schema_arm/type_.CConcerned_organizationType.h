#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CConcerned_organizationType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CConcerned_organizationType



namespace cutting_tool_schema_arm
{

class CConcerned_organizationType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CConcerned_organizationType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CConcerned_organizationType(CConcerned_organizationType const& init);
	void operator=(CConcerned_organizationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CConcerned_organizationType); }
	MemberElement<COrganization, _altova_mi_altova_CConcerned_organizationType_altova_Organization> Organization;
	struct Organization { typedef Iterator<COrganization> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CConcerned_organizationType
