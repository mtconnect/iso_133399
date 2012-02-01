#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType



namespace cutting_tool_schema_arm
{

class CRelatingType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatingType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatingType(CRelatingType const& init);
	void operator=(CRelatingType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatingType); }
	MemberElement<CItem_definition, _altova_mi_altova_CRelatingType_altova_Item_definition> Item_definition;
	struct Item_definition { typedef Iterator<CItem_definition> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatingType
