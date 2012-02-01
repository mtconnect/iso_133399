#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoatingType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoatingType



namespace cutting_tool_schema_arm
{

class CCoatingType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CCoatingType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCoatingType(CCoatingType const& init);
	void operator=(CCoatingType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCoatingType); }
	MemberElement<CCoating, _altova_mi_altova_CCoatingType_altova_Coating> Coating;
	struct Coating { typedef Iterator<CCoating> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCoatingType
