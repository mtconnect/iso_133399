#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_organizationType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_organizationType



namespace cutting_tool_schema_arm
{

class CAssociated_organizationType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssociated_organizationType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssociated_organizationType(CAssociated_organizationType const& init);
	void operator=(CAssociated_organizationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssociated_organizationType); }
	MemberElement<COrganization, _altova_mi_altova_CAssociated_organizationType_altova_Organization> Organization;
	struct Organization { typedef Iterator<COrganization> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_organizationType
