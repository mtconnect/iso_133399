#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_COrganization
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_COrganization



namespace cutting_tool_schema_arm
{

class COrganization : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT COrganization(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT COrganization(COrganization const& init);
	void operator=(COrganization const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_COrganization); }

	MemberAttribute<string_type,_altova_mi_altova_COrganization_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_COrganization_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_COrganization_altova_Delivery_address> Delivery_address;
	struct Delivery_address { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_COrganization_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_COrganization_altova_Organization_name> Organization_name;
	struct Organization_name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_COrganization_altova_Organization_type> Organization_type;
	struct Organization_type { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_COrganization_altova_Postal_address> Postal_address;
	struct Postal_address { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_COrganization_altova_Visitor_address> Visitor_address;
	struct Visitor_address { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_COrganization
