#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType



namespace cutting_tool_schema_arm
{

class CRelatedType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CRelatedType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CRelatedType(CRelatedType const& init);
	void operator=(CRelatedType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CRelatedType); }
	MemberElement<CItem_instance, _altova_mi_altova_CRelatedType_altova_Item_instance> Item_instance;
	struct Item_instance { typedef Iterator<CItem_instance> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CRelatedType
