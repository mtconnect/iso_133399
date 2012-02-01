#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssigned_person_organizationType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssigned_person_organizationType



namespace cutting_tool_schema_arm
{

class CAssigned_person_organizationType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssigned_person_organizationType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssigned_person_organizationType(CAssigned_person_organizationType const& init);
	void operator=(CAssigned_person_organizationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssigned_person_organizationType); }
	MemberElement<COrganization, _altova_mi_altova_CAssigned_person_organizationType_altova_Organization> Organization;
	struct Organization { typedef Iterator<COrganization> iterator; };
	MemberElement<CPerson_in_organization, _altova_mi_altova_CAssigned_person_organizationType_altova_Person_in_organization> Person_in_organization;
	struct Person_in_organization { typedef Iterator<CPerson_in_organization> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssigned_person_organizationType
