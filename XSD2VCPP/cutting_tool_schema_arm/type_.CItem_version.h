#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_version
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_version



namespace cutting_tool_schema_arm
{

class CItem_version : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CItem_version(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CItem_version(CItem_version const& init);
	void operator=(CItem_version const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CItem_version); }

	MemberAttribute<string_type,_altova_mi_altova_CItem_version_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CItem_version_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssociated_itemType2, _altova_mi_altova_CItem_version_altova_Associated_item> Associated_item;
	struct Associated_item { typedef Iterator<CAssociated_itemType2> iterator; };
	MemberElement<CDescriptionType18, _altova_mi_altova_CItem_version_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType18> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CItem_version_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CItem_version
