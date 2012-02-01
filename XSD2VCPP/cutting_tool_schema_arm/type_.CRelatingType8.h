#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType8
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType8



namespace cutting_tool_schema_arm
{

class CRelatingType8 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatingType8(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatingType8(CRelatingType8 const& init);
	void operator=(CRelatingType8 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatingType8); }
	MemberElement<CItem_version, _altova_mi_altova_CRelatingType8_altova_Item_version> Item_version;
	struct Item_version { typedef Iterator<CItem_version> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType8
