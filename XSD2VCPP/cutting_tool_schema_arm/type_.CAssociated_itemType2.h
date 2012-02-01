#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_itemType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_itemType2



namespace cutting_tool_schema_arm
{

class CAssociated_itemType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssociated_itemType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssociated_itemType2(CAssociated_itemType2 const& init);
	void operator=(CAssociated_itemType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssociated_itemType2); }
	MemberElement<CItem, _altova_mi_altova_CAssociated_itemType2_altova_Item> Item;
	struct Item { typedef Iterator<CItem> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_itemType2
