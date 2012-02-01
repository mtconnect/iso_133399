#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRealized_item_association
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRealized_item_association



namespace cutting_tool_schema_arm
{

class CRealized_item_association : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRealized_item_association(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRealized_item_association(CRealized_item_association const& init);
	void operator=(CRealized_item_association const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRealized_item_association); }

	MemberAttribute<string_type,_altova_mi_altova_CRealized_item_association_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CRealized_item_association_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CPhysical_itemType, _altova_mi_altova_CRealized_item_association_altova_Physical_item> Physical_item;
	struct Physical_item { typedef Iterator<CPhysical_itemType> iterator; };
	MemberElement<CRealized_item_versionType, _altova_mi_altova_CRealized_item_association_altova_Realized_item_version> Realized_item_version;
	struct Realized_item_version { typedef Iterator<CRealized_item_versionType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRealized_item_association
