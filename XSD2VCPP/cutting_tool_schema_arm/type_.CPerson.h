#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPerson
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPerson



namespace cutting_tool_schema_arm
{

class CPerson : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CPerson(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPerson(CPerson const& init);
	void operator=(CPerson const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPerson); }

	MemberAttribute<string_type,_altova_mi_altova_CPerson_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CPerson_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CPerson_altova_Person_name> Person_name;
	struct Person_name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CPerson_altova_Preferred_business_address> Preferred_business_address;
	struct Preferred_business_address { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPerson
