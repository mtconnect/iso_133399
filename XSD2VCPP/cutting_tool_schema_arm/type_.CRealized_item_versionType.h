#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRealized_item_versionType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRealized_item_versionType



namespace cutting_tool_schema_arm
{

class CRealized_item_versionType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRealized_item_versionType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRealized_item_versionType(CRealized_item_versionType const& init);
	void operator=(CRealized_item_versionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRealized_item_versionType); }
	MemberElement<CItem_version, _altova_mi_altova_CRealized_item_versionType_altova_Item_version> Item_version;
	struct Item_version { typedef Iterator<CItem_version> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRealized_item_versionType
