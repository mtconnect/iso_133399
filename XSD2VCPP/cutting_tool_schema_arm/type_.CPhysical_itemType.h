#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_itemType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_itemType



namespace cutting_tool_schema_arm
{

class CPhysical_itemType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CPhysical_itemType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPhysical_itemType(CPhysical_itemType const& init);
	void operator=(CPhysical_itemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPhysical_itemType); }
	MemberElement<CPhysical_item, _altova_mi_altova_CPhysical_itemType_altova_Physical_item> Physical_item;
	struct Physical_item { typedef Iterator<CPhysical_item> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_itemType
