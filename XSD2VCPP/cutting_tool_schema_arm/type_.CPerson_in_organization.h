#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPerson_in_organization
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPerson_in_organization



namespace cutting_tool_schema_arm
{

class CPerson_in_organization : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CPerson_in_organization(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPerson_in_organization(CPerson_in_organization const& init);
	void operator=(CPerson_in_organization const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPerson_in_organization); }

	MemberAttribute<string_type,_altova_mi_altova_CPerson_in_organization_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CPerson_in_organization_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssociated_organizationType, _altova_mi_altova_CPerson_in_organization_altova_Associated_organization> Associated_organization;
	struct Associated_organization { typedef Iterator<CAssociated_organizationType> iterator; };
	MemberElement<CAssociated_personType, _altova_mi_altova_CPerson_in_organization_altova_Associated_person> Associated_person;
	struct Associated_person { typedef Iterator<CAssociated_personType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CPerson_in_organization_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CPerson_in_organization_altova_Location> Location;
	struct Location { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CPerson_in_organization_altova_Role> Role;
	struct Role { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPerson_in_organization
