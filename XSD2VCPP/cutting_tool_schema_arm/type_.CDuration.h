#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDuration
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDuration



namespace cutting_tool_schema_arm
{

class CDuration : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDuration(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDuration(CDuration const& init);
	void operator=(CDuration const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDuration); }

	MemberAttribute<string_type,_altova_mi_altova_CDuration_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDuration_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CDuration_altova_Time> Time;
	struct Time { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDuration_altova_Time_unit> Time_unit;
	struct Time_unit { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDuration
