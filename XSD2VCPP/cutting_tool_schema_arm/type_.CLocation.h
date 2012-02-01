#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocation
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocation



namespace cutting_tool_schema_arm
{

class CLocation : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CLocation(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CLocation(CLocation const& init);
	void operator=(CLocation const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CLocation); }

	MemberAttribute<string_type,_altova_mi_altova_CLocation_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CLocation_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CLocation_altova_Location_id> Location_id;
	struct Location_id { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CLocation_altova_Location_name> Location_name;
	struct Location_name { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CLocation_altova_Location_type> Location_type;
	struct Location_type { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CLocation
