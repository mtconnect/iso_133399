#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPerson_organization_assignment
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPerson_organization_assignment



namespace cutting_tool_schema_arm
{

class CPerson_organization_assignment : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CPerson_organization_assignment(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPerson_organization_assignment(CPerson_organization_assignment const& init);
	void operator=(CPerson_organization_assignment const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPerson_organization_assignment); }

	MemberAttribute<string_type,_altova_mi_altova_CPerson_organization_assignment_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CPerson_organization_assignment_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssigned_person_organizationType, _altova_mi_altova_CPerson_organization_assignment_altova_Assigned_person_organization> Assigned_person_organization;
	struct Assigned_person_organization { typedef Iterator<CAssigned_person_organizationType> iterator; };
	MemberElement<CDescriptionType20, _altova_mi_altova_CPerson_organization_assignment_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType20> iterator; };
	MemberElement<CIs_applied_toType2, _altova_mi_altova_CPerson_organization_assignment_altova_Is_applied_to> Is_applied_to;
	struct Is_applied_to { typedef Iterator<CIs_applied_toType2> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CPerson_organization_assignment_altova_Role> Role;
	struct Role { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPerson_organization_assignment
