#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType8
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType8



namespace cutting_tool_schema_arm
{

class CRelatedType8 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatedType8(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatedType8(CRelatedType8 const& init);
	void operator=(CRelatedType8 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatedType8); }
	MemberElement<CItem_version, _altova_mi_altova_CRelatedType8_altova_Item_version> Item_version;
	struct Item_version { typedef Iterator<CItem_version> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType8
