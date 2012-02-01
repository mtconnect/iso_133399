#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_itemType3
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_itemType3



namespace cutting_tool_schema_arm
{

class CAssociated_itemType3 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssociated_itemType3(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssociated_itemType3(CAssociated_itemType3 const& init);
	void operator=(CAssociated_itemType3 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssociated_itemType3); }
	MemberElement<CItem, _altova_mi_altova_CAssociated_itemType3_altova_Item> Item;
	struct Item { typedef Iterator<CItem> iterator; };
	MemberElement<CPhysical_item, _altova_mi_altova_CAssociated_itemType3_altova_Physical_item> Physical_item;
	struct Physical_item { typedef Iterator<CPhysical_item> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_itemType3
