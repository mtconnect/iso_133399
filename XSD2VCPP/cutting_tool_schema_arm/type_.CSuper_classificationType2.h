#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSuper_classificationType2
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSuper_classificationType2



namespace cutting_tool_schema_arm
{

class CSuper_classificationType2 : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CSuper_classificationType2(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CSuper_classificationType2(CSuper_classificationType2 const& init);
	void operator=(CSuper_classificationType2 const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSuper_classificationType2); }
	MemberElement<CSpecific_item_classification, _altova_mi_altova_CSuper_classificationType2_altova_Specific_item_classification> Specific_item_classification;
	struct Specific_item_classification { typedef Iterator<CSpecific_item_classification> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CSuper_classificationType2
