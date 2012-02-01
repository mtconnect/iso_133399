#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGrade
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGrade



namespace cutting_tool_schema_arm
{

class CGrade : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CGrade(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CGrade(CGrade const& init);
	void operator=(CGrade const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CGrade); }

	MemberAttribute<string_type,_altova_mi_altova_CGrade_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CGrade_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CCoatingType, _altova_mi_altova_CGrade_altova_Coating> Coating;
	struct Coating { typedef Iterator<CCoatingType> iterator; };
	MemberElement<CCutting_conditionType, _altova_mi_altova_CGrade_altova_Cutting_condition> Cutting_condition;
	struct Cutting_condition { typedef Iterator<CCutting_conditionType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CGrade_altova_Identifier> Identifier;
	struct Identifier { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CGrade_altova_Standard_designation> Standard_designation;
	struct Standard_designation { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CSubstrateType, _altova_mi_altova_CGrade_altova_Substrate> Substrate;
	struct Substrate { typedef Iterator<CSubstrateType> iterator; };
	MemberElement<CWorkpiece_materialType, _altova_mi_altova_CGrade_altova_Workpiece_material> Workpiece_material;
	struct Workpiece_material { typedef Iterator<CWorkpiece_materialType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGrade
