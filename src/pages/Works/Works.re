module WorksStyles = {
  open Css;

  let title = style([
    fontSize(rem(3.0)),
    fontWeight(700),
    color(Theme.white),
  ]);
}

let component = ReasonReact.statelessComponent("Works");

let make = (_children) => {
  ...component,
  render: _self =>
    <PageWrapper>
      <h1 className=WorksStyles.title>(ReasonReact.string("Still procrastinating on this, sorry :("))</h1>
    </PageWrapper>,
};
