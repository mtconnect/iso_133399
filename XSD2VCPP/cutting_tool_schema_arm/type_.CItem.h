#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem



namespace cutting_tool_schema_arm
{

class CItem : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CItem(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CItem(CItem const& init);
	void operator=(CItem const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CItem); }

	MemberAttribute<string_type,_altova_mi_altova_CItem_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CItem_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CDescriptionType15, _altova_mi_altova_CItem_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType15> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CItem_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CNameType4, _altova_mi_altova_CItem_altova_Name> Name;
	struct Name { typedef Iterator<CNameType4> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem
